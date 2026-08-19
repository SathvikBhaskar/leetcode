SELECT p.firstName,p.lastname,a.city,a.state
FROM Person p
LEFT JOIN Address a ON p.personId=a.personId