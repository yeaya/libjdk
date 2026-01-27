#ifndef _com_sun_org_apache_xerces_internal_xinclude_MultipleScopeNamespaceSupport_h_
#define _com_sun_org_apache_xerces_internal_xinclude_MultipleScopeNamespaceSupport_h_
//$ class com.sun.org.apache.xerces.internal.xinclude.MultipleScopeNamespaceSupport
//$ extends com.sun.org.apache.xerces.internal.util.NamespaceSupport

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <java/lang/Array.h>

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
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

class MultipleScopeNamespaceSupport : public ::com::sun::org::apache::xerces::internal::util::NamespaceSupport {
	$class(MultipleScopeNamespaceSupport, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::NamespaceSupport)
public:
	MultipleScopeNamespaceSupport();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	virtual ::java::util::Enumeration* getAllPrefixes() override;
	virtual $String* getPrefix($String* uri) override;
	virtual $String* getPrefix($String* uri, int32_t context);
	virtual $String* getPrefix($String* uri, int32_t start, int32_t end);
	virtual int32_t getScopeForContext(int32_t context);
	virtual $String* getURI($String* prefix) override;
	virtual $String* getURI($String* prefix, int32_t context);
	virtual $String* getURI($String* prefix, int32_t start, int32_t end);
	virtual void popScope();
	virtual void pushScope();
	virtual void reset() override;
	$ints* fScope = nullptr;
	int32_t fCurrentScope = 0;
};

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xinclude_MultipleScopeNamespaceSupport_h_