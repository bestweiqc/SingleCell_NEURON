#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _bg2inter_reg(void);
extern void _bg2pyr_reg(void);
extern void _ca_reg(void);
extern void _cadyn_reg(void);
extern void _cal2_reg(void);
extern void _capool_reg(void);
extern void _currentclamp_reg(void);
extern void _function_TMonitor_reg(void);
extern void _h_reg(void);
extern void _im_reg(void);
extern void _interD2pyrD_STFD_new_reg(void);
extern void _interD2pyrV_STFD_new_reg(void);
extern void _interV2pyrD_STFD_new_reg(void);
extern void _interV2pyrV_STFD_new_reg(void);
extern void _kadist_reg(void);
extern void _kaprox_reg(void);
extern void _kdrca1_reg(void);
extern void _kdrca1DA_reg(void);
extern void _kdrinter_reg(void);
extern void _kv_reg(void);
extern void _leak_reg(void);
extern void _leakDA_reg(void);
extern void _leakinter_reg(void);
extern void _na12_reg(void);
extern void _na16_reg(void);
extern void _na3_reg(void);
extern void _na3DA_reg(void);
extern void _nainter_reg(void);
extern void _nap_reg(void);
extern void _nat_reg(void);
extern void _pyrD2interD_STFD_reg(void);
extern void _pyrD2interV_STFD_reg(void);
extern void _pyrD2pyrD_STFD_new_reg(void);
extern void _pyrD2pyrV_STFD_new_reg(void);
extern void _pyrV2interD_STFD_reg(void);
extern void _pyrV2interV_STFD_reg(void);
extern void _pyrV2pyrD_STFD_new_reg(void);
extern void _pyrV2pyrV_STFD_new_reg(void);
extern void _sahp_reg(void);
extern void _sahpNE_reg(void);
extern void _shock2interD_reg(void);
extern void _shock2interV_reg(void);
extern void _shock2pyrD_reg(void);
extern void _shock2pyrV_reg(void);
extern void _tone2interD_new_reg(void);
extern void _tone2interV_new_reg(void);
extern void _tone2pyrD_LAdv_new_reg(void);
extern void _tone2pyrD_new_reg(void);
extern void _tone2pyrV_LAdd_new_reg(void);
extern void _tone2pyrV_new_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," bg2inter.mod");
    fprintf(stderr," bg2pyr.mod");
    fprintf(stderr," ca.mod");
    fprintf(stderr," cadyn.mod");
    fprintf(stderr," cal2.mod");
    fprintf(stderr," capool.mod");
    fprintf(stderr," currentclamp.mod");
    fprintf(stderr," function_TMonitor.mod");
    fprintf(stderr," h.mod");
    fprintf(stderr," im.mod");
    fprintf(stderr," interD2pyrD_STFD_new.mod");
    fprintf(stderr," interD2pyrV_STFD_new.mod");
    fprintf(stderr," interV2pyrD_STFD_new.mod");
    fprintf(stderr," interV2pyrV_STFD_new.mod");
    fprintf(stderr," kadist.mod");
    fprintf(stderr," kaprox.mod");
    fprintf(stderr," kdrca1.mod");
    fprintf(stderr," kdrca1DA.mod");
    fprintf(stderr," kdrinter.mod");
    fprintf(stderr," kv.mod");
    fprintf(stderr," leak.mod");
    fprintf(stderr," leakDA.mod");
    fprintf(stderr," leakinter.mod");
    fprintf(stderr," na12.mod");
    fprintf(stderr," na16.mod");
    fprintf(stderr," na3.mod");
    fprintf(stderr," na3DA.mod");
    fprintf(stderr," nainter.mod");
    fprintf(stderr," nap.mod");
    fprintf(stderr," nat.mod");
    fprintf(stderr," pyrD2interD_STFD.mod");
    fprintf(stderr," pyrD2interV_STFD.mod");
    fprintf(stderr," pyrD2pyrD_STFD_new.mod");
    fprintf(stderr," pyrD2pyrV_STFD_new.mod");
    fprintf(stderr," pyrV2interD_STFD.mod");
    fprintf(stderr," pyrV2interV_STFD.mod");
    fprintf(stderr," pyrV2pyrD_STFD_new.mod");
    fprintf(stderr," pyrV2pyrV_STFD_new.mod");
    fprintf(stderr," sahp.mod");
    fprintf(stderr," sahpNE.mod");
    fprintf(stderr," shock2interD.mod");
    fprintf(stderr," shock2interV.mod");
    fprintf(stderr," shock2pyrD.mod");
    fprintf(stderr," shock2pyrV.mod");
    fprintf(stderr," tone2interD_new.mod");
    fprintf(stderr," tone2interV_new.mod");
    fprintf(stderr," tone2pyrD_LAdv_new.mod");
    fprintf(stderr," tone2pyrD_new.mod");
    fprintf(stderr," tone2pyrV_LAdd_new.mod");
    fprintf(stderr," tone2pyrV_new.mod");
    fprintf(stderr, "\n");
  }
  _bg2inter_reg();
  _bg2pyr_reg();
  _ca_reg();
  _cadyn_reg();
  _cal2_reg();
  _capool_reg();
  _currentclamp_reg();
  _function_TMonitor_reg();
  _h_reg();
  _im_reg();
  _interD2pyrD_STFD_new_reg();
  _interD2pyrV_STFD_new_reg();
  _interV2pyrD_STFD_new_reg();
  _interV2pyrV_STFD_new_reg();
  _kadist_reg();
  _kaprox_reg();
  _kdrca1_reg();
  _kdrca1DA_reg();
  _kdrinter_reg();
  _kv_reg();
  _leak_reg();
  _leakDA_reg();
  _leakinter_reg();
  _na12_reg();
  _na16_reg();
  _na3_reg();
  _na3DA_reg();
  _nainter_reg();
  _nap_reg();
  _nat_reg();
  _pyrD2interD_STFD_reg();
  _pyrD2interV_STFD_reg();
  _pyrD2pyrD_STFD_new_reg();
  _pyrD2pyrV_STFD_new_reg();
  _pyrV2interD_STFD_reg();
  _pyrV2interV_STFD_reg();
  _pyrV2pyrD_STFD_new_reg();
  _pyrV2pyrV_STFD_new_reg();
  _sahp_reg();
  _sahpNE_reg();
  _shock2interD_reg();
  _shock2interV_reg();
  _shock2pyrD_reg();
  _shock2pyrV_reg();
  _tone2interD_new_reg();
  _tone2interV_new_reg();
  _tone2pyrD_LAdv_new_reg();
  _tone2pyrD_new_reg();
  _tone2pyrV_LAdd_new_reg();
  _tone2pyrV_new_reg();
}
