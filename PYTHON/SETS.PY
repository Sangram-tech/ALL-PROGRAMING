team_a = {"Python", "SQL", "Data Analysis", "Machine Learning"}
team_b = {"SQL", "Data Analysis", "Cloud Computing", "DevOps"}
common_skills = team_a.intersection(team_b)
print("Common skills:", common_skills)
unique_skills_a = team_a.difference(team_b)
unique_skills_b = team_b.difference(team_a)
print("Skills unique to Team A:", unique_skills_a)
print("Skills unique to Team B:", unique_skills_b)
comprehensive_skills = team_a.union(team_b)
print("Comprehensive skill set:", comprehensive_skills)