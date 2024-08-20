import datetime

class Doctor:
    def __init__(self, author, specialty, availability):
        self.author = author
        self.specialty = specialty
        self.availability = availability

class Patient:
    def __init__(self, author, age, gender, phone_number):
        self.author = author
        self.age = age
        self.gender = gender
        self.phone_number = phone_number

class Appointment:
    def __init__(self, doctor, patient, date, time):
        self.doctor = doctor
        self.patient = patient
        self.date = date
        self.time = time

class HealthcareApp:
    def __init__(self):
        self.doctors = []
        self.patients = []
        self.appointments = []

    def add_doctor(self, doctor):
        self.doctors.append(doctor)

    def add_patient(self, patient):
        self.patients.append(patient)

    def schedule_appointment(self, doctor_name, patient_name, date, time):
        doctor = next((d for d in self.doctors if d.author == doctor_name), None)
        patient = next((p for p in self.patients if p.author == patient_name), None)
        if doctor and patient:
            appointment = Appointment(doctor, patient, date, time)
            self.appointments.append(appointment)
            return f"Appointment scheduled with Dr. {doctor_name} on {date} at {time}."
        else:
            return "Doctor or patient not found."

# Example usage
app = HealthcareApp()

# Add doctors
app.add_doctor(Doctor("John Doe", "Cardiologist", ["Monday", "Wednesday", "Friday"]))
app.add_doctor(Doctor("Jane Smith", "Dermatologist", ["Tuesday", "Thursday"]))

# Add patients
app.add_patient(Patient("Alice", 30, "Female", "123-456-7890"))
app.add_patient(Patient("Bob", 40, "Male", "987-654-3210"))

# Schedule appointment
print(app.schedule_appointment("John Doe", "Alice", datetime.date(2023, 11, 15), "10:00 AM"))