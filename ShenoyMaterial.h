#pragma once
#include <FEBioMech/FEElasticMaterial.h>

class FEShenoyMaterial : public FEElasticMaterial
{
public:
	FEShenoyMaterial(FEModel* fem);

	mat3ds Stress(FEMaterialPoint& mp);

	tens4ds Tangent(FEMaterialPoint& mp);

private:
	double fiberStress(double lam);
	double fiberTangent(double lam);

private:
	double	m_mu;
	double	m_k;
	double	m_Ef;
	double	m_lamc;
	double	m_lamt;
	double	m_n;
	double	m_m;

	DECLARE_PARAMETER_LIST();
};
