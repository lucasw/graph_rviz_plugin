#ifndef RVIZ_GRAPH_PANEL_CONFIGURE_GRAPH_HPP
#define RVIZ_GRAPH_PANEL_CONFIGURE_GRAPH_HPP

#include <QCheckBox>
#include <QDialog>
#include <QLabel>
#include <QDialogButtonBox>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QRadioButton>
#include <QFormLayout>
#include <QDoubleSpinBox>
#include <QComboBox>

namespace rviz_graph_plugin
{

class ConfigureGraph : public QDialog
{
  Q_OBJECT

public:
  ConfigureGraph(bool scale_auto, bool window_time_enable, bool legend_enable, double y_min, double y_max , double w_time , double refresh_period, QDialog *parent = 0);
  ~ConfigureGraph();
  double y_min_;
  double y_max_;
  double w_time_;
  double refresh_period_; // in seconds
  bool scale_auto_;
  bool window_time_enable_;
  bool legend_enable_;

protected Q_SLOTS:
  void yAxisAutoscale(bool checked);
  void xAxisWindowTime(bool checked);
  void okClicked();

private:
  QDoubleSpinBox *y_min_double_spin_box_;
  QDoubleSpinBox *y_max_double_spin_box_;
  QDoubleSpinBox *w_time_double_spin_box_;
  QComboBox *refresh_frequency_spin_box_;
  QCheckBox *legend_enable_button_;
};

}

#endif