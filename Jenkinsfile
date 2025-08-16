pipeline {
    agent {
        docker {
            image 'continuul/build-essential'
            args '-v /var/run/docker.sock:/var/run/docker.sock'
        }
    }

    stages {
        stage('Checkout'){
            steps {
                git branch: 'main',
                    credentialsId: '91fc729f-6903-43f9-a481-e3f5f34417b0',
                    url: 'https://github.com/tgjuranec/algos.git'
            }
        }
        stage('Build') {
            steps {
                sh 'echo "Building..."'
                git branch: 'main', url:'https://github.com/tgjuranec/algos.git'
                sh '''
                    make algos
                    '''
                sh 'ls -al'
            }
        }

        stage('Test') {
            steps {
                sh 'echo "Test..."'
                sh '''
                    make test
                    '''
                sh './testdir/test'
            }
        }
        stage('Deploy') {
            steps {
                sh 'tar -czf algos.tar.gz target/algos'
                archiveArtifacts artifacts: 'algos.tar.gz', fingerprint: true
            }
        }
    }
}
