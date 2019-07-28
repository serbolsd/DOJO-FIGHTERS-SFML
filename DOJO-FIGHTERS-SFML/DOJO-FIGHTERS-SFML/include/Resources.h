#pragma once

enum Attack_ID
{
	ID_LightAttack,
	ID_HeavyAttack,
	ID_SpecialLight,
	ID_SpecialHeavy,
	ID_SupremeAttack
};
 
enum Collider_ID
{
	ID_LightCollider,
	ID_HeavyCollider,
	ID_SpecialLightCollider,
	ID_SpecialHeavyCollider,
	ID_SupremeCollider
};

enum PivotPos
{
	superiorIzquierdo = 0,
	superiorDerecho,
	inferiorIzquierdo,
	inferiorderecho,
	superiorCentro,
	inferiorCentro,
	Centro,
	centroIzqierdo,
	centroDerecho
};