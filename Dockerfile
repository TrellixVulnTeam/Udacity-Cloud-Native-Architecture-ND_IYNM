FROM python:2.7
WORKDIR techtrends/
COPY ./techtrends ./
EXPOSE 3111
RUN apt-get update && pip install --upgrade pip && pip install -r requirements.txt
RUN python init_db.py
CMD ["python","./app.py"]

