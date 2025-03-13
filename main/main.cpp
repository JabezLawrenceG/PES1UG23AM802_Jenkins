pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'g++ main.cpp -o main.out' // Correct file name
            }
        }
        stage('Test') {
            steps {
                sh 'chmod +x main.out'
                sh './main.out'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deployment successful'
            }
        }
    }
    post {
        success {
            echo 'Pipeline Successful!'
        }
        failure {
            echo 'Pipeline Failed'
        }
    }
}
