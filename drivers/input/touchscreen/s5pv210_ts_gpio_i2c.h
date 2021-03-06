/*
 *  gpio i2c driver
 */
#ifndef	_S5PV210_TS_GPIO_I2C_H_
#define	_S5PV210_TS_GPIO_I2C_H_

extern int s5pv210_ts_write(unsigned char addr, unsigned char *wdata, unsigned char wsize);
extern int s5pv210_ts_read(unsigned char *rdata, unsigned char rsize);
extern void s5pv210_ts_port_init(void);

#endif	/*_S5PV210_TS_GPIO_I2C_H_*/
