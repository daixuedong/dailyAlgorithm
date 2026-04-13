use rand::Rng;
use std::io::{self, BufRead, BufReader};
use std::fs::File;

struct ReservoirSampler<T> {
    reservoir: Vec<T>,    // 蓄水池
    capacity: usize,      // 蓄水池容量
    count: usize,         // 已处理的元素总数
    rng: rand::rngs::ThreadRng,
}

impl<T> ReservoirSampler<T> {
    fn new(k: usize) -> Self {
        ReservoirSampler {
            reservoir: Vec::with_capacity(k),
            capacity: k,
            count: 0,
            rng: rand::thread_rng(),
        }
    }

    fn sample(&mut self, item: T) {
        self.count += 1;

        if self.count <= self.capacity {
            self.reservoir.push(item);
        } else {
            let j = self.rng.gen_range(0..self.count);
            if j < self.capacity {
                self.reservoir[j] = item;
            }
        }
    }

    fn get_samples(&self) -> &Vec<T> {
        &self.reservoir
    }
}
