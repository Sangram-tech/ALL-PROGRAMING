team_a = {"Python", "SQL", "Data Analysis", "Machine Learning"}
team_b = {"SQL", "Data Analysis", "Cloud Computing", "DevOps"}

# a) Find the skills that both teams have in common.
common_skills = team_a.intersection(team_b)
print("Common skills:", common_skills)

# b) Identify skills unique to each team.
unique_skills_a = team_a.difference(team_b)
unique_skills_b = team_b.difference(team_a)
print("Skills unique to Team A:", unique_skills_a)
print("Skills unique to Team B:", unique_skills_b)

# c) Suggest a comprehensive skill set required for the project.
comprehensive_skills = team_a.union(team_b)
print("Comprehensive skill set:", comprehensive_skills)