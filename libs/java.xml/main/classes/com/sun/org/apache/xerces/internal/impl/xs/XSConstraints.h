#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSConstraints_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSConstraints_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSConstraints
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ELEMENT_PARTICLE_COMPARATOR")
#undef ELEMENT_PARTICLE_COMPARATOR
#pragma push_macro("OCCURRENCE_UNKNOWN")
#undef OCCURRENCE_UNKNOWN
#pragma push_macro("STRING_TYPE")
#undef STRING_TYPE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLErrorReporter;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
								class ValidationContext;
								class XSSimpleType;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SubstitutionGroupHandler;
								class XSComplexTypeDecl;
								class XSElementDecl;
								class XSGrammarBucket;
								class XSParticleDecl;
								class XSWildcardDecl;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {
									class CMBuilder;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class SimpleLocator;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolHash;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSTypeDefinition;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class XSConstraints : public ::java::lang::Object {
	$class(XSConstraints, 0, ::java::lang::Object)
public:
	XSConstraints();
	void init$();
	static $Object* ElementDefaultValidImmediate(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type, $String* value, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* vinfo);
	static void addElementToParticleVector(::java::util::List* v, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* d);
	static bool checkComplexDerivation(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* derived, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* base, int16_t block);
	static bool checkComplexDerivationOk(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* derived, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* base, int16_t block);
	static void checkElementDeclsConsistent(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* type, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle, ::com::sun::org::apache::xerces::internal::util::SymbolHash* elemDeclHash, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* sgHandler);
	static void checkIDConstraintRestriction(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* derivedElemDecl, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* baseElemDecl);
	static void checkMapAndSum(::java::util::List* dChildren, int32_t min1, int32_t max1, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* dSGHandler, ::java::util::List* bChildren, int32_t min2, int32_t max2, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* bSGHandler);
	static void checkNSCompat(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* elem, int32_t min1, int32_t max1, ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* wildcard, int32_t min2, int32_t max2, bool checkWCOccurrence);
	static void checkNSRecurseCheckCardinality(::java::util::List* children, int32_t min1, int32_t max1, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* dSGHandler, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* wildcard, int32_t min2, int32_t max2, bool checkWCOccurrence);
	static void checkNSSubset(::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* dWildcard, int32_t min1, int32_t max1, ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* bWildcard, int32_t min2, int32_t max2);
	static void checkNameAndTypeOK(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* dElement, int32_t dMin, int32_t dMax, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* bElement, int32_t bMin, int32_t bMax);
	static bool checkOccurrenceRange(int32_t min1, int32_t max1, int32_t min2, int32_t max2);
	static void checkRecurse(::java::util::List* dChildren, int32_t min1, int32_t max1, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* dSGHandler, ::java::util::List* bChildren, int32_t min2, int32_t max2, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* bSGHandler);
	static void checkRecurseLax(::java::util::List* dChildren, int32_t min1, int32_t max1, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* dSGHandler, ::java::util::List* bChildren, int32_t min2, int32_t max2, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* bSGHandler);
	static void checkRecurseUnordered(::java::util::List* dChildren, int32_t min1, int32_t max1, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* dSGHandler, ::java::util::List* bChildren, int32_t min2, int32_t max2, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* bSGHandler);
	static bool checkSimpleDerivation(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* derived, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* base, int16_t block);
	static bool checkSimpleDerivationOk(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* derived, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* base, int16_t block);
	static bool checkTypeDerivationOk(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* derived, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* base, int16_t block);
	static void findElemInTable(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* type, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* elem, ::com::sun::org::apache::xerces::internal::util::SymbolHash* elemDeclHash);
	static void fullSchemaChecking(::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* grammarBucket, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* SGHandler, ::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder* cmBuilder, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter);
	static void gatherChildren(int32_t parentType, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* p, ::java::util::List* children);
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* getEmptySequence();
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* getNonUnaryGroup(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* p);
	static bool overlapUPA(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element1, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element2, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* sgHandler);
	static bool overlapUPA(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element, ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* wildcard, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* sgHandler);
	static bool overlapUPA(::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* wildcard1, ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* wildcard2);
	static bool overlapUPA(Object$* decl1, Object$* decl2, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* sgHandler);
	static bool particleValidRestriction(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* dParticle, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* dSGHandler, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* bParticle, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* bSGHandler);
	static bool particleValidRestriction(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* dParticle, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* dSGHandler, ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* bParticle, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* bSGHandler, bool checkWCOccurrence);
	static ::java::util::List* removePointlessChildren(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* p);
	static void reportSchemaError(::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* loc, $String* key, $ObjectArray* args);
	static const int32_t OCCURRENCE_UNKNOWN = -2; // SchemaSymbols.OCCURRENCE_UNBOUNDED - 1
	static ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* STRING_TYPE;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* fEmptyParticle;
	static ::java::util::Comparator* ELEMENT_PARTICLE_COMPARATOR;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ELEMENT_PARTICLE_COMPARATOR")
#pragma pop_macro("OCCURRENCE_UNKNOWN")
#pragma pop_macro("STRING_TYPE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSConstraints_h_