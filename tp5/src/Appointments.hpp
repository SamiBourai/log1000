#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <numeric>

#include "Constants.hpp"
#include "CSVHandler.hpp"
//#include "AppointmentsData.hpp"

class Appointments
{
public:
    Appointments(std::string filePath);
    void display(unsigned int userCol, std::string userId, std::vector<unsigned int> displayedColumns = {});
    bool schedule(std::string patientId, std::string nurseId);
    int getHoursRate(std::string patientDisease, std::string nurseExperience);


    std::vector<std::vector<std::string>>* getData();    // ajout des methode de l'ancienne classe AppointementDate
    void setData(std::vector<std::vector<std::string>> data);

private:
    void displayHeader(std::vector<unsigned int>& displayedColumns);
    void filterAppointments(unsigned int userCol, std::string userId, std::vector<std::vector<std::string>>& filteredAppointments);
    std::vector<std::string> createNewAppointment(std::string patientId, std::string nurseId);

   ////// AppointmentsData _appointmentsData; a supprimer
    std::vector<std::string> _headers;
    CSVHandler _csvHandler;

    const unsigned int _COLUMN_WIDTH = 14;


    std::vector<std::vector<std::string>> _data;   /// ajout de l'attribut de l'ancienne classe AppointementDate
};
