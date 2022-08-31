/*this function tells wifi is using sd(sdiob) or sdio(sdioa)*/
const char *get_wifi_inf(void)
{
	return "sdiob";
}
EXPORT_SYMBOL(get_wifi_inf);
