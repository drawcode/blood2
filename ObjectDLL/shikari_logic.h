
float		ShikariAI::m_fInternalState[NUM_INPUT_STATES][NUM_INTERNAL_STATES][NUM_INTERNAL_STATES] =
{		
//										NEXT									
//STIMULI	LAST	ATTACK		SEARCH	ESCAPE	WAIT	GUARD	HEALTH	AMMO	HIDE	
/*SIGHT*/		{																	
	/*ATTACK*/		{	1.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*SEARCH*/		{	1.00f,	0.10f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*ESCAPE*/		{	0.50f,	0.00f,	1.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*WAIT*/		{	1.00f,	0.00f,	0.00f,	0.15f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*GUARD*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.10f,	0.00f,	0.00f,	0.00f},
	/*HEALTH*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.10f,	0.10f,	0.00f},
	/*AMMO*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.10f,	0.10f,	0.00f},
	/*HIDE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f}
		},													
/*SOUND*/		{												
	/*ATTACK*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*SEARCH*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*ESCAPE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*WAIT*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*GUARD*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*HEALTH*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*AMMO*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*HIDE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f}
		},													
/*SMELL*/		{												
	/*ATTACK*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*SEARCH*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*ESCAPE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*WAIT*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*GUARD*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*HEALTH*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*AMMO*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*HIDE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f}
		},													
/*SENSE*/		{												
	/*ATTACK*/		{	1.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*SEARCH*/		{	1.00f,	0.10f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*ESCAPE*/		{	0.50f,	0.00f,	1.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*WAIT*/		{	1.00f,	0.00f,	0.00f,	0.15f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*GUARD*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*HEALTH*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*AMMO*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*HIDE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f}
		},													
/*THREAT*/		{												
	/*ATTACK*/		{	0.50f,	0.00f,	1.00f,	0.10f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*SEARCH*/		{	0.50f,	0.10f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*ESCAPE*/		{	0.25f,	0.00f,	0.00f,	0.10f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*WAIT*/		{	0.50f,	0.00f,	1.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*GUARD*/		{	0.50f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},
	/*HEALTH*/		{	0.50f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*AMMO*/		{	0.50f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*HIDE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f}				
		},															
/*HEALTH*/		{															
	/*ATTACK*/		{	0.50f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*SEARCH*/		{	0.50f,	0.50f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*ESCAPE*/		{	0.10f,	0.00f,	0.25f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*WAIT*/		{	0.50f,	0.50f,	0.25f,	0.50f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*GUARD*/		{	0.50f,	0.50f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*HEALTH*/		{	0.50f,	0.00f,	0.25f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*AMMO*/		{	0.50f,	0.00f,	0.25f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f},				
	/*HIDE*/		{	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f,	0.00f}				
		},																					
};																							