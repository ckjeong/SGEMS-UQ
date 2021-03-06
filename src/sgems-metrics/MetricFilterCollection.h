#ifndef METRICFILTERCOLLECTION_H_
#define METRICFILTERCOLLECTION_H_

#include <metrics_action_common.h>
#include <MetricFilter.h>
#include <vector>
#include <GsTLAppli/grid/grid_model/geostat_grid.h>
#include <GsTLAppli/grid/grid_model/grid_property.h> 

using namespace std;

class METRICSACTIONS_DECL MetricFilterCollection
{
public:
	MetricFilterCollection(void);
	~MetricFilterCollection(void);
	void addFilter(MetricFilter* f);
	vector<MetricFilter*>::iterator begin(){return filters_.begin();}
	vector<MetricFilter*>::iterator end(){return filters_.end();}
	int size(){return filters_.size();}
	MetricFilter* getMetricFilter(int index) {return filters_[index];}

//	void create_vector(Geostat_grid* input_grid, GsTLGridProperty* input_prop, vector<float>& output_vector);
private:
	vector<MetricFilter*> filters_;
};


#endif