# DAOscillate
Maya node to derive secondary action from the delta of keyframes provided, convert it to a decaying sine wave to be a "naive pendulum" effect.

Inputs will be:
- Transform Value -- Any translate or Rotate that has been keyed.
- Amplification -- How much sinusoid amplitude should be derived from the input delta
- Period -- period of the sinusoid
- Low Pass -- A floor value to block sinusoid motion to a certain degree
- High Pass -- A ceiling value to block sinusoid motion to a certain degree
- Decay -- rate of decay of sinusoid amplitude

Outputs will be:
- Transform Value -- the secondary action transform to be applied as artist sees fit
- Delta Value -- the delta detected, to be applied as the artist sees fit
