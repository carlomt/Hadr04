#ifndef PrimaryGeneratorAction_h
#define PrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"
#include "G4ParticleDefinition.hh"

class G4Event;
class G4ParticleDefinition;
class G4GeneralParticleSource;

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction{
  
public:
  PrimaryGeneratorAction();    
  virtual ~PrimaryGeneratorAction() override;
  virtual void GeneratePrimaries(G4Event*) override;

  G4double GetParticleEnergy();
  G4ParticleDefinition* GetParticleDefinition();

private:
  G4GeneralParticleSource* particleGun;
  G4double fEnergy;
};

#endif
