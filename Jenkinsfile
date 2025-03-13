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
                sh './non_existent_file'  // Execute the compiled binary
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
