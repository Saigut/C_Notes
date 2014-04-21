// for tm struct in time.h
void showtm(struct tm *ftm)
{
  printf("%d %d %d %d %d %d %d %d %d\n", ftm->tm_sec, ftm->tm_min, ftm->tm_hour, ftm->tm_mday, ftm->tm_mon, ftm->tm_year, ftm->tm_wday, ftm->tm_yday, ftm->tm_isdst);
}
