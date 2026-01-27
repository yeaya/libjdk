#ifndef _com_sun_org_apache_xerces_internal_util_JAXPNamespaceContextWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_JAXPNamespaceContextWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.JAXPNamespaceContextWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.NamespaceContext

#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/lang/Array.h>

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
namespace java {
	namespace util {
		class Enumeration;
		class List;
		class Vector;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
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

class JAXPNamespaceContextWrapper : public ::com::sun::org::apache::xerces::internal::xni::NamespaceContext {
	$class(JAXPNamespaceContextWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext)
public:
	JAXPNamespaceContextWrapper();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual bool declarePrefix($String* prefix, $String* uri) override;
	virtual ::java::util::Enumeration* getAllPrefixes() override;
	virtual $String* getDeclaredPrefixAt(int32_t index) override;
	virtual int32_t getDeclaredPrefixCount() override;
	::java::util::List* getDeclaredPrefixes();
	::javax::xml::namespace$::NamespaceContext* getNamespaceContext();
	virtual $String* getPrefix($String* uri) override;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* getSymbolTable();
	virtual $String* getURI($String* prefix) override;
	virtual void popContext() override;
	virtual void pushContext() override;
	virtual void reset() override;
	void setDeclaredPrefixes(::java::util::List* prefixes);
	void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* context);
	void setSymbolTable(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	::javax::xml::namespace$::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::util::List* fPrefixes = nullptr;
	::java::util::Vector* fAllPrefixes = nullptr;
	$ints* fContext = nullptr;
	int32_t fCurrentContext = 0;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_JAXPNamespaceContextWrapper_h_