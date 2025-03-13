FROM jenkins/jenkins:lts

# Switch to root to install dependencies
USER root

# Install required dependencies
RUN apt-get update && \
    apt-get install -y make g++ nodejs npm --fix-missing

# Optional: Symlink `node` if it's missing
RUN ln -s /usr/bin/nodejs /usr/bin/node

# Switch back to Jenkins user (best practice)
USER jenkins
