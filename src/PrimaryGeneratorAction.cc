#include "PrimaryGeneratorAction.hh"
#include "G4GeneralParticleSource.hh"


PrimaryGeneratorAction::PrimaryGeneratorAction()
{
  particleGun = new G4GeneralParticleSource();

}

PrimaryGeneratorAction::~PrimaryGeneratorAction()
{
  delete particleGun;
}


void PrimaryGeneratorAction::GeneratePrimaries( G4Event* anEvent )
{
  particleGun->GeneratePrimaryVertex( anEvent );
}

G4double PrimaryGeneratorAction::GetParticleEnergy()
{
  return particleGun->GetParticleEnergy();
}

G4ParticleDefinition* PrimaryGeneratorAction::GetParticleDefinition()
{
  return particleGun->GetParticleDefinition();
}
