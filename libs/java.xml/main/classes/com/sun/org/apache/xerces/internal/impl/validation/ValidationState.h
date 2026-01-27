#ifndef _com_sun_org_apache_xerces_internal_impl_validation_ValidationState_h_
#define _com_sun_org_apache_xerces_internal_impl_validation_ValidationState_h_
//$ class com.sun.org.apache.xerces.internal.impl.validation.ValidationState
//$ extends com.sun.org.apache.xerces.internal.impl.dv.ValidationContext

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {
								class EntityState;
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
							class SymbolTable;
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
						namespace xni {
							class NamespaceContext;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class HashSet;
		class Iterator;
		class List;
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {

class ValidationState : public ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext {
	$class(ValidationState, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext)
public:
	ValidationState();
	void init$();
	virtual void addId($String* name) override;
	virtual void addIdRef($String* name) override;
	virtual ::java::util::Iterator* checkIDRefID();
	virtual ::java::util::Locale* getLocale() override;
	virtual $String* getSymbol($String* symbol) override;
	virtual $String* getURI($String* prefix) override;
	virtual bool isEntityDeclared($String* name) override;
	virtual bool isEntityUnparsed($String* name) override;
	virtual bool isIdDeclared($String* name) override;
	virtual bool needExtraChecking() override;
	virtual bool needFacetChecking() override;
	virtual bool needToNormalize() override;
	virtual void reset();
	virtual void resetIDTables();
	virtual void setEntityState(::com::sun::org::apache::xerces::internal::impl::validation::EntityState* state);
	virtual void setExtraChecking(bool newValue);
	virtual void setFacetChecking(bool newValue);
	virtual void setLocale(::java::util::Locale* locale);
	virtual void setNamespaceSupport(::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespace$);
	virtual void setNormalizationRequired(bool newValue);
	virtual void setSymbolTable(::com::sun::org::apache::xerces::internal::util::SymbolTable* sTable);
	virtual void setUsingNamespaces(bool newValue);
	virtual bool useNamespaces() override;
	bool fExtraChecking = false;
	bool fFacetChecking = false;
	bool fNormalize = false;
	bool fNamespaces = false;
	::com::sun::org::apache::xerces::internal::impl::validation::EntityState* fEntityState = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::java::util::HashSet* fIds = nullptr;
	::java::util::List* fIdRefList = nullptr;
};

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_validation_ValidationState_h_