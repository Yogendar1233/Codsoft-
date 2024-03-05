import weka.core.Instances;
import weka.classifiers.Classifier;
import weka.classifiers.Evaluation;
import weka.classifiers.trees.RandomForest;
import weka.core.converters.CSVLoader;

import java.io.File;

public class TitanicSurvivalPrediction {
    public static void main(String[] args) throws Exception {
        // Load CSV data
        CSVLoader loader = new CSVLoader();
        loader.setSource(new File("titanic.csv"));
        Instances data = loader.getDataSet();
        data.setClassIndex(data.numAttributes() - 1);

        // Train a classifier (Random Forest in this case)
        Classifier classifier = new RandomForest();
        classifier.buildClassifier(data);

        // Evaluate the classifier
        Evaluation eval = new Evaluation(data);
        eval.crossValidateModel(classifier, data, 10, new java.util.Random(1));
        System.out.println(eval.toSummaryString("\nResults\n======\n", false));

        // Predict survival for new data (you'll need to prepare new instances)
        // For example:
        // Instance newPassenger = new Instance(1.0, new double[]{...});
        // double prediction = classifier.classifyInstance(newPassenger);
        // System.out.println("Predicted survival: " + (prediction == 0 ? "No" : "Yes"));
    }
}
