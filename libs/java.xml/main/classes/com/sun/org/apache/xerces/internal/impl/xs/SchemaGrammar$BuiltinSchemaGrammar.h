#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$BuiltinSchemaGrammar_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$BuiltinSchemaGrammar_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinSchemaGrammar
//$ extends com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>

#pragma push_macro("EXTENDED_SCHEMA_FACTORY_CLASS")
#undef EXTENDED_SCHEMA_FACTORY_CLASS

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

class SchemaGrammar$BuiltinSchemaGrammar : public ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar {
	$class(SchemaGrammar$BuiltinSchemaGrammar, 0, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar)
public:
	SchemaGrammar$BuiltinSchemaGrammar();
	void init$(int32_t grammar, int16_t schemaVersion);
	virtual void addComplexTypeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* decl, ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* locator) override;
	virtual void addDocument(Object$* document, $String* location) override;
	virtual void addGlobalAttributeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* decl) override;
	virtual void addGlobalAttributeDecl(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* decl, $String* location) override;
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
	virtual ::com::sun::org::apache::xerces::internal::parsers::DOMParser* getDOMParser() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* getGrammarDescription() override;
	virtual ::com::sun::org::apache::xerces::internal::parsers::SAXParser* getSAXParser() override;
	virtual void setImportedGrammars(::java::util::List* importedGrammars) override;
	static $String* EXTENDED_SCHEMA_FACTORY_CLASS;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EXTENDED_SCHEMA_FACTORY_CLASS")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SchemaGrammar$BuiltinSchemaGrammar_h_