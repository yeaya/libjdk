#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$Schema4Annotations_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$Schema4Annotations_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$Schema4Annotations
//$ extends com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
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
								class XSAttributeDecl;
								class XSAttributeGroupDecl;
								class XSComplexTypeDecl;
								class XSElementDecl;
								class XSGroupDecl;
								class XSNotationDecl;
								class XSParticleDecl;
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
						namespace parsers {
							class DOMParser;
							class SAXParser;
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
							namespace grammars {
								class XMLGrammarDescription;
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

class SchemaGrammar$Schema4Annotations : public ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar {
	$class(SchemaGrammar$Schema4Annotations, 0, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar)
public:
	SchemaGrammar$Schema4Annotations();
	using ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar::addGlobalAttributeDecl;
	void init$();
	virtual void addComplexTypeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* decl, ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* locator) override;
	virtual void addDocument(Object$* document, $String* location) override;
	virtual void addGlobalAttributeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* decl) override;
	void addGlobalAttributeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* decl, $String* location);
	virtual void addGlobalAttributeGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* decl) override;
	virtual void addGlobalAttributeGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* decl, $String* location) override;
	virtual void addGlobalComplexTypeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* decl) override;
	virtual void addGlobalComplexTypeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* decl, $String* location) override;
	virtual void addGlobalElementDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* decl) override;
	virtual void addGlobalElementDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* decl, $String* location) override;
	virtual void addGlobalElementDeclAll(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* decl) override;
	virtual void addGlobalGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* decl) override;
	virtual void addGlobalGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* decl, $String* location) override;
	virtual void addGlobalNotationDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* decl) override;
	virtual void addGlobalNotationDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl* decl, $String* location) override;
	virtual void addGlobalSimpleTypeDecl(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* decl) override;
	virtual void addGlobalSimpleTypeDecl(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* decl, $String* location) override;
	virtual void addGlobalTypeDecl(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* decl) override;
	virtual void addGlobalTypeDecl(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* decl, $String* location) override;
	virtual void addRedefinedGroupDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* derived, ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl* base, ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* locator) override;
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* createAnnotationElementDecl($String* localName);
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* createAnyLaxWildcardParticle();
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* createChoiceElementParticle(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* ref);
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* createUnboundedAnyWildcardSequenceParticle();
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* createUnboundedModelGroupParticle();
	virtual ::com::sun::org::apache::xerces::internal::parsers::DOMParser* getDOMParser() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* getGrammarDescription() override;
	virtual ::com::sun::org::apache::xerces::internal::parsers::SAXParser* getSAXParser() override;
	virtual void setImportedGrammars(::java::util::List* importedGrammars) override;
	static ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$Schema4Annotations* INSTANCE;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INSTANCE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$Schema4Annotations_h_