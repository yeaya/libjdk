#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSAllCM.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMBinOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMUniOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSEmptyCM.h>
#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <jcpp.h>

#undef CONTENTTYPE_EMPTY
#undef CONTENTTYPE_SIMPLE
#undef MODELGROUP_ALL
#undef MODELGROUP_CHOICE
#undef MODELGROUP_SEQUENCE
#undef OCCURRENCE_UNBOUNDED
#undef PARTICLE_ELEMENT
#undef PARTICLE_MODELGROUP
#undef PARTICLE_ONE_OR_MORE
#undef PARTICLE_WILDCARD
#undef PARTICLE_ZERO_OR_MORE
#undef PARTICLE_ZERO_OR_ONE

using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $CMNodeFactory = ::com::sun::org::apache::xerces::internal::impl::xs::models::CMNodeFactory;
using $XSAllCM = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSAllCM;
using $XSCMBinOp = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMBinOp;
using $XSCMLeaf = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf;
using $XSCMUniOp = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMUniOp;
using $XSCMValidator = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator;
using $XSDFACM = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSDFACM;
using $XSEmptyCM = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSEmptyCM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _CMBuilder_FieldInfo_[] = {
	{"fDeclPool", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool;", nullptr, $PRIVATE, $field(CMBuilder, fDeclPool)},
	{"fEmptyCM", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSEmptyCM;", nullptr, $PRIVATE | $STATIC, $staticField(CMBuilder, fEmptyCM)},
	{"fLeafCount", "I", nullptr, $PRIVATE, $field(CMBuilder, fLeafCount)},
	{"fParticleCount", "I", nullptr, $PRIVATE, $field(CMBuilder, fParticleCount)},
	{"fNodeFactory", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory;", nullptr, $PRIVATE, $field(CMBuilder, fNodeFactory)},
	{}
};

$MethodInfo _CMBuilder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory;)V", nullptr, $PUBLIC, $method(CMBuilder, init$, void, $CMNodeFactory*)},
	{"buildCompactSyntaxTree", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $method(CMBuilder, buildCompactSyntaxTree, $CMNode*, $XSParticleDecl*)},
	{"buildCompactSyntaxTree2", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;II)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $method(CMBuilder, buildCompactSyntaxTree2, $CMNode*, $XSParticleDecl*, int32_t, int32_t)},
	{"buildSyntaxTree", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;ZZ)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $method(CMBuilder, buildSyntaxTree, $CMNode*, $XSParticleDecl*, bool, bool)},
	{"copyNode", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $method(CMBuilder, copyNode, $CMNode*, $CMNode*)},
	{"createAllCM", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, 0, $virtualMethod(CMBuilder, createAllCM, $XSCMValidator*, $XSParticleDecl*)},
	{"createDFACM", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Z)Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, 0, $virtualMethod(CMBuilder, createDFACM, $XSCMValidator*, $XSParticleDecl*, bool)},
	{"expandContentModel", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;IIZ)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $method(CMBuilder, expandContentModel, $CMNode*, $CMNode*, int32_t, int32_t, bool)},
	{"getContentModel", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Z)Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, $PUBLIC, $virtualMethod(CMBuilder, getContentModel, $XSCMValidator*, $XSComplexTypeDecl*, bool)},
	{"multiNodes", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;IZ)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $method(CMBuilder, multiNodes, $CMNode*, $CMNode*, int32_t, bool)},
	{"setDeclPool", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool;)V", nullptr, $PUBLIC, $virtualMethod(CMBuilder, setDeclPool, void, $XSDeclarationPool*)},
	{"useRepeatingLeafNodes", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Z", nullptr, $PRIVATE, $method(CMBuilder, useRepeatingLeafNodes, bool, $XSParticleDecl*)},
	{}
};

$ClassInfo _CMBuilder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.CMBuilder",
	"java.lang.Object",
	nullptr,
	_CMBuilder_FieldInfo_,
	_CMBuilder_MethodInfo_
};

$Object* allocate$CMBuilder($Class* clazz) {
	return $of($alloc(CMBuilder));
}

$XSEmptyCM* CMBuilder::fEmptyCM = nullptr;

void CMBuilder::init$($CMNodeFactory* nodeFactory) {
	$set(this, fDeclPool, nullptr);
	$set(this, fDeclPool, nullptr);
	$set(this, fNodeFactory, nodeFactory);
}

void CMBuilder::setDeclPool($XSDeclarationPool* declPool) {
	$set(this, fDeclPool, declPool);
}

$XSCMValidator* CMBuilder::getContentModel($XSComplexTypeDecl* typeDecl, bool forUPA) {
	$useLocalCurrentObjectStackCache();
	int16_t contentType = $nc(typeDecl)->getContentType();
	if (contentType == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE || contentType == $XSComplexTypeDecl::CONTENTTYPE_EMPTY) {
		return nullptr;
	}
	$var($XSParticleDecl, particle, $cast($XSParticleDecl, typeDecl->getParticle()));
	if (particle == nullptr) {
		return CMBuilder::fEmptyCM;
	}
	$var($XSCMValidator, cmValidator, nullptr);
	if ($nc(particle)->fType == $XSParticleDecl::PARTICLE_MODELGROUP && $nc(($cast($XSModelGroupImpl, particle->fValue)))->fCompositor == $XSModelGroupImpl::MODELGROUP_ALL) {
		$assign(cmValidator, createAllCM(particle));
	} else {
		$assign(cmValidator, createDFACM(particle, forUPA));
	}
	$nc(this->fNodeFactory)->resetNodeCount();
	if (cmValidator == nullptr) {
		$assign(cmValidator, CMBuilder::fEmptyCM);
	}
	return cmValidator;
}

$XSCMValidator* CMBuilder::createAllCM($XSParticleDecl* particle) {
	$useLocalCurrentObjectStackCache();
	if ($nc(particle)->fMaxOccurs == 0) {
		return nullptr;
	}
	$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, $nc(particle)->fValue));
	$var($XSAllCM, allContent, $new($XSAllCM, particle->fMinOccurs == 0, $nc(group)->fParticleCount));
	for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
		allContent->addElement($cast($XSElementDecl, $nc($nc(group->fParticles)->get(i))->fValue), $nc($nc(group->fParticles)->get(i))->fMinOccurs == 0);
	}
	return allContent;
}

$XSCMValidator* CMBuilder::createDFACM($XSParticleDecl* particle, bool forUPA) {
	this->fLeafCount = 0;
	this->fParticleCount = 0;
	$var($CMNode, node, useRepeatingLeafNodes(particle) ? buildCompactSyntaxTree(particle) : buildSyntaxTree(particle, forUPA, true));
	if (node == nullptr) {
		return nullptr;
	}
	return $new($XSDFACM, node, this->fLeafCount);
}

$CMNode* CMBuilder::buildSyntaxTree($XSParticleDecl* particle, bool forUPA, bool optimize) {
	$useLocalCurrentObjectStackCache();
	int32_t maxOccurs = $nc(particle)->fMaxOccurs;
	int32_t minOccurs = particle->fMinOccurs;
	bool compactedForUPA = false;
	if (forUPA) {
		if (minOccurs > 1) {
			if (maxOccurs > minOccurs || particle->getMaxOccursUnbounded()) {
				minOccurs = 1;
				compactedForUPA = true;
			} else {
				minOccurs = 2;
				compactedForUPA = true;
			}
		}
		if (maxOccurs > 1) {
			maxOccurs = 2;
			compactedForUPA = true;
		}
	}
	int16_t type = particle->fType;
	$var($CMNode, nodeRet, nullptr);
	if ((type == $XSParticleDecl::PARTICLE_WILDCARD) || (type == $XSParticleDecl::PARTICLE_ELEMENT)) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMLeafNode(particle->fType, particle->fValue, this->fParticleCount++, this->fLeafCount++));
		$assign(nodeRet, expandContentModel(nodeRet, minOccurs, maxOccurs, optimize));
		if (nodeRet != nullptr) {
			nodeRet->setIsCompactUPAModel(compactedForUPA);
		}
	} else if (type == $XSParticleDecl::PARTICLE_MODELGROUP) {
		$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, particle->fValue));
		$var($CMNode, temp, nullptr);
		bool twoChildren = false;
		for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
			$assign(temp, buildSyntaxTree($nc(group->fParticles)->get(i), forUPA, optimize && minOccurs == 1 && maxOccurs == 1 && (group->fCompositor == $XSModelGroupImpl::MODELGROUP_SEQUENCE || group->fParticleCount == 1)));
			if (temp != nullptr) {
				compactedForUPA |= temp->isCompactedForUPA();
				if (nodeRet == nullptr) {
					$assign(nodeRet, temp);
				} else {
					$assign(nodeRet, $nc(this->fNodeFactory)->getCMBinOpNode(group->fCompositor, nodeRet, temp));
					twoChildren = true;
				}
			}
		}
		if (nodeRet != nullptr) {
			if ($nc(group)->fCompositor == $XSModelGroupImpl::MODELGROUP_CHOICE && !twoChildren && group->fParticleCount > 1) {
				$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_ONE, nodeRet));
			}
			$assign(nodeRet, expandContentModel(nodeRet, minOccurs, maxOccurs, false));
			$nc(nodeRet)->setIsCompactUPAModel(compactedForUPA);
		}
	}
	return nodeRet;
}

$CMNode* CMBuilder::expandContentModel($CMNode* node$renamed, int32_t minOccurs, int32_t maxOccurs, bool optimize) {
	$useLocalCurrentObjectStackCache();
	$var($CMNode, node, node$renamed);
	$var($CMNode, nodeRet, nullptr);
	if (minOccurs == 1 && maxOccurs == 1) {
		$assign(nodeRet, node);
	} else if (minOccurs == 0 && maxOccurs == 1) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_ONE, node));
	} else if (minOccurs == 0 && maxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_MORE, node));
	} else if (minOccurs == 1 && maxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ONE_OR_MORE, node));
	} else {
		bool var$1 = optimize && $nc(node)->type() == $XSParticleDecl::PARTICLE_ELEMENT;
		if (var$1 || $nc(node)->type() == $XSParticleDecl::PARTICLE_WILDCARD) {
			$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode(minOccurs == 0 ? $XSParticleDecl::PARTICLE_ZERO_OR_MORE : $XSParticleDecl::PARTICLE_ONE_OR_MORE, node));
			$nc(nodeRet)->setUserData($$new($ints, {
				minOccurs,
				maxOccurs
			}));
		} else if (maxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
			$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ONE_OR_MORE, node));
			$assign(nodeRet, $nc(this->fNodeFactory)->getCMBinOpNode($XSModelGroupImpl::MODELGROUP_SEQUENCE, $(multiNodes(node, minOccurs - 1, true)), nodeRet));
		} else {
			if (minOccurs > 0) {
				$assign(nodeRet, multiNodes(node, minOccurs, false));
			}
			if (maxOccurs > minOccurs) {
				$assign(node, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_ONE, node));
				if (nodeRet == nullptr) {
					$assign(nodeRet, multiNodes(node, maxOccurs - minOccurs, false));
				} else {
					$assign(nodeRet, $nc(this->fNodeFactory)->getCMBinOpNode($XSModelGroupImpl::MODELGROUP_SEQUENCE, nodeRet, $(multiNodes(node, maxOccurs - minOccurs, true))));
				}
			}
		}
	}
	return nodeRet;
}

$CMNode* CMBuilder::multiNodes($CMNode* node, int32_t num, bool copyFirst) {
	$useLocalCurrentObjectStackCache();
	if (num == 0) {
		return nullptr;
	}
	if (num == 1) {
		return copyFirst ? copyNode(node) : node;
	}
	int32_t num1 = num / 2;
	$var($CMNode, var$0, multiNodes(node, num1, copyFirst));
	return $nc(this->fNodeFactory)->getCMBinOpNode($XSModelGroupImpl::MODELGROUP_SEQUENCE, var$0, $(multiNodes(node, num - num1, true)));
}

$CMNode* CMBuilder::copyNode($CMNode* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($CMNode, node, node$renamed);
	int32_t type = $nc(node)->type();
	if (type == $XSModelGroupImpl::MODELGROUP_CHOICE || type == $XSModelGroupImpl::MODELGROUP_SEQUENCE) {
		$var($XSCMBinOp, bin, $cast($XSCMBinOp, node));
		int32_t var$0 = type;
		$var($CMNode, var$1, copyNode($(bin->getLeft())));
		$assign(node, $nc(this->fNodeFactory)->getCMBinOpNode(var$0, var$1, $(copyNode($(bin->getRight())))));
	} else if (type == $XSParticleDecl::PARTICLE_ZERO_OR_MORE || type == $XSParticleDecl::PARTICLE_ONE_OR_MORE || type == $XSParticleDecl::PARTICLE_ZERO_OR_ONE) {
		$var($XSCMUniOp, uni, $cast($XSCMUniOp, node));
		$assign(node, $nc(this->fNodeFactory)->getCMUniOpNode(type, $(copyNode($(uni->getChild())))));
	} else if (type == $XSParticleDecl::PARTICLE_ELEMENT || type == $XSParticleDecl::PARTICLE_WILDCARD) {
		$var($XSCMLeaf, leaf, $cast($XSCMLeaf, node));
		int32_t var$2 = leaf->type();
		$var($Object, var$3, leaf->getLeaf());
		$assign(node, $nc(this->fNodeFactory)->getCMLeafNode(var$2, var$3, leaf->getParticleId(), this->fLeafCount++));
	}
	return node;
}

$CMNode* CMBuilder::buildCompactSyntaxTree($XSParticleDecl* particle) {
	$useLocalCurrentObjectStackCache();
	int32_t maxOccurs = $nc(particle)->fMaxOccurs;
	int32_t minOccurs = particle->fMinOccurs;
	int16_t type = particle->fType;
	$var($CMNode, nodeRet, nullptr);
	if ((type == $XSParticleDecl::PARTICLE_WILDCARD) || (type == $XSParticleDecl::PARTICLE_ELEMENT)) {
		return buildCompactSyntaxTree2(particle, minOccurs, maxOccurs);
	} else if (type == $XSParticleDecl::PARTICLE_MODELGROUP) {
		$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, particle->fValue));
		if ($nc(group)->fParticleCount == 1 && (minOccurs != 1 || maxOccurs != 1)) {
			return buildCompactSyntaxTree2($nc($nc(group)->fParticles)->get(0), minOccurs, maxOccurs);
		} else {
			$var($CMNode, temp, nullptr);
			int32_t count = 0;
			for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
				$assign(temp, buildCompactSyntaxTree($nc(group->fParticles)->get(i)));
				if (temp != nullptr) {
					++count;
					if (nodeRet == nullptr) {
						$assign(nodeRet, temp);
					} else {
						$assign(nodeRet, $nc(this->fNodeFactory)->getCMBinOpNode(group->fCompositor, nodeRet, temp));
					}
				}
			}
			if (nodeRet != nullptr) {
				if ($nc(group)->fCompositor == $XSModelGroupImpl::MODELGROUP_CHOICE && count < group->fParticleCount) {
					$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_ONE, nodeRet));
				}
			}
		}
	}
	return nodeRet;
}

$CMNode* CMBuilder::buildCompactSyntaxTree2($XSParticleDecl* particle, int32_t minOccurs, int32_t maxOccurs) {
	$var($CMNode, nodeRet, nullptr);
	if (minOccurs == 1 && maxOccurs == 1) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMLeafNode($nc(particle)->fType, particle->fValue, this->fParticleCount++, this->fLeafCount++));
	} else if (minOccurs == 0 && maxOccurs == 1) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMLeafNode($nc(particle)->fType, particle->fValue, this->fParticleCount++, this->fLeafCount++));
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_ONE, nodeRet));
	} else if (minOccurs == 0 && maxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMLeafNode($nc(particle)->fType, particle->fValue, this->fParticleCount++, this->fLeafCount++));
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_MORE, nodeRet));
	} else if (minOccurs == 1 && maxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMLeafNode($nc(particle)->fType, particle->fValue, this->fParticleCount++, this->fLeafCount++));
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ONE_OR_MORE, nodeRet));
	} else {
		$assign(nodeRet, $nc(this->fNodeFactory)->getCMRepeatingLeafNode($nc(particle)->fType, particle->fValue, minOccurs, maxOccurs, this->fParticleCount++, this->fLeafCount++));
		if (minOccurs == 0) {
			$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ZERO_OR_MORE, nodeRet));
		} else {
			$assign(nodeRet, $nc(this->fNodeFactory)->getCMUniOpNode($XSParticleDecl::PARTICLE_ONE_OR_MORE, nodeRet));
		}
	}
	return nodeRet;
}

bool CMBuilder::useRepeatingLeafNodes($XSParticleDecl* particle) {
	$useLocalCurrentObjectStackCache();
	int32_t maxOccurs = $nc(particle)->fMaxOccurs;
	int32_t minOccurs = particle->fMinOccurs;
	int16_t type = particle->fType;
	if (type == $XSParticleDecl::PARTICLE_MODELGROUP) {
		$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, particle->fValue));
		if (minOccurs != 1 || maxOccurs != 1) {
			if ($nc(group)->fParticleCount == 1) {
				$var($XSParticleDecl, particle2, $nc(group->fParticles)->get(0));
				int16_t type2 = $nc(particle2)->fType;
				return ((type2 == $XSParticleDecl::PARTICLE_ELEMENT || type2 == $XSParticleDecl::PARTICLE_WILDCARD) && particle2->fMinOccurs == 1 && particle2->fMaxOccurs == 1);
			}
			return ($nc(group)->fParticleCount == 0);
		}
		for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
			if (!useRepeatingLeafNodes($nc(group->fParticles)->get(i))) {
				return false;
			}
		}
	}
	return true;
}

void clinit$CMBuilder($Class* class$) {
	$assignStatic(CMBuilder::fEmptyCM, $new($XSEmptyCM));
}

CMBuilder::CMBuilder() {
}

$Class* CMBuilder::load$($String* name, bool initialize) {
	$loadClass(CMBuilder, name, initialize, &_CMBuilder_ClassInfo_, clinit$CMBuilder, allocate$CMBuilder);
	return class$;
}

$Class* CMBuilder::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com