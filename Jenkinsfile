pipeline {
    agent any  // Runs on any available Jenkins agent

    environment {
        APP_NAME = 'my-node-app'
        DOCKER_IMAGE = 'mydockerhubuser/my-node-app'
    }

    stages {
        stage('Build') {
            steps {
                script {
                    echo 'Building the application...'
                    sh 'npm install'
                    sh 'npm run build'
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    echo 'Running tests...'
                    sh 'npm test'
                }
            }
        }

        stage('Deploy') {
            steps {
                script {
                    echo 'Deploying the application...'
                    sh 'docker build -t $DOCKER_IMAGE:$BUILD_NUMBER .'
                    sh 'docker push $DOCKER_IMAGE:$BUILD_NUMBER'
                }
            }
        }
    }

    post {
        success {
            echo 'Pipeline Completed Successfully!'
        }

        failure {
            echo 'Pipeline Failed!'
            sh 'echo "PIPELINE FAILED" > failure.log'
        }
    }
}
