---
layout: page
title: People
permalink: /people/
description:
nav: true
nav_order: 1
display_categories: [Assistant Professor, Postdoc, PhD Students, Master Students]
horizontal: false
---


<!-- pages/people.md -->
<br/><br/> 
### Lab for Intelligence and VisiON (LION)
---------------------------------------------------------------
<div class="projects">
{%- if site.enable_project_categories and page.display_categories %}
  <!-- Display categorized projects -->
  {%- for category in page.display_categories %}
  <br>
  <br>
  <h3 class="category">{{ category }}</h3>
  <hr />
  {%- assign categorized_projects = site.projects | where: "category", category -%}
  {%- assign sorted_projects = categorized_projects | sort: "importance" %}
  <!-- Generate cards for each project -->
  {% if page.horizontal -%}
  <div class="container">
    <div class="row row-cols-2">
    {%- for project in sorted_projects -%}
      {% include projects_horizontal.html %}
    {%- endfor %}
    </div>
  </div>
  {%- else -%}
  <div class="grid">
    {%- for project in sorted_projects -%}
      {% include projects.html %}
    {%- endfor %}
  </div>
  {%- endif -%}
  {% endfor %}

{%- else -%}
<!-- Display projects without categories -->
  {%- assign sorted_projects = site.projects | sort: "importance" -%}
  <!-- Generate cards for each project -->
  {% if page.horizontal -%}
  <div class="container">
    <div class="row row-cols-2">
    {%- for project in sorted_projects -%}
      {% include projects_horizontal.html %}
    {%- endfor %}
    </div>
  </div>
  {%- else -%}
  <div class="grid">
    {%- for project in sorted_projects -%}
      {% include projects.html %}
    {%- endfor %}
  </div>
  {%- endif -%}
{%- endif -%}
</div>


<br/><br/> 
### Ex-Members
---------------------------------------------------------------

##### Dr. Yongguo Ling @ Assistant Professor, Guangxi University



<br/><br/> 
### Long-term Collaborators
---------------------------------------------------------------
##### Prof. Nicu Sebe @ UNITN

##### Dr. Hong Liu @ NII

##### Prof. Zhiming Luo @ XMU

##### Dr. Feng Liu @ UoM

<br>
<br>
<br>
