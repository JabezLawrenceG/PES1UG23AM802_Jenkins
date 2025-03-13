pipeline {
    agent any  // Use any available agent

    stages {
        stage('Build') {
            steps {
                sh 'g++ -o PES1UG23AM802-1 main.cpp'  // Compile the .cpp file
            }
        }

        stage('Test') {
            steps {
                sh './PES1UG23AM802-1'  // Execute the compiled binary
            }
        }

        stage('Deploy') {
            steps {
                echo "Deployment stage completed successfully."
            }
        }
    }

    post {
        failure {
            echo 'Pipeline failed'  // Display message if pipeline fails
        }
    }
}
