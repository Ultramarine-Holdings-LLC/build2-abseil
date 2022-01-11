#include <absl/time/time.h>

int main() {
  const auto tz = absl::UTCTimeZone();
  const auto et = absl::FromTimeT(0);
  if (absl::FormatTime("%A %B %d, %Y", et, tz) != "Thursday January 01, 1970") {
    return -1;
  }
  return 0;
}
