vector<int> times, hits;

times.resize(300);
hits.resize(300);

/** Record a hit.
@param timestamp - The current timestamp
(in seconds granularity). */
void hit(int timestamp)
{
	int idx = timestamp % 300;
	if (times[idx] != timestamp) {
		times[idx] = timestamp;
		hits[idx] = 1;
	}
	else {
		++hits[idx];
	}
}

// Time Complexity : O(1)

/** Return the number of hits in the past 5 minutes.
	@param timestamp - The current timestamp (in
	seconds granularity). */
int getHits(int timestamp)
{
	int res = 0;
	for (int i = 0; i < 300; ++i) {
		if (timestamp - times[i] < 300) {
			res += hits[i];
		}
	}
	return res;
}
// Time Complexity : O(300) == O(1)
