use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    println!("Number of arguments: {}", args.len() - 1);
    for (i, a) in args[1..].iter().enumerate() {
        println!("{:>2}. {}", i+1, a);
    }
}
