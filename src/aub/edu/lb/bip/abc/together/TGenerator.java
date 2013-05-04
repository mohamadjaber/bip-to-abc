package aub.edu.lb.bip.abc.together;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;


import ujf.verimag.bip.Core.Interactions.CompoundType;

public class TGenerator {
	
	private TCompound tCompound; 
	
	PrintStream output; 
	
	public TGenerator(CompoundType compound, String fileName) throws FileNotFoundException {
		tCompound = new TCompound(compound);
		output = new PrintStream(new File(fileName));
	}
	
	public TCompound getTCompound() {
		return tCompound;
	}
	
}
