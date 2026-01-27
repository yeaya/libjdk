#ifndef _com_sun_org_apache_xerces_internal_util_NamespaceSupport_h_
#define _com_sun_org_apache_xerces_internal_util_NamespaceSupport_h_
//$ class com.sun.org.apache.xerces.internal.util.NamespaceSupport
//$ extends com.sun.org.apache.xerces.internal.xni.NamespaceContext

#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Enumeration;
		class Iterator;
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class NamespaceSupport : public ::com::sun::org::apache::xerces::internal::xni::NamespaceContext {
	$class(NamespaceSupport, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext)
public:
	NamespaceSupport();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	virtual bool containsPrefix($String* prefix);
	virtual bool containsPrefixInCurrentContext($String* prefix);
	virtual bool declarePrefix($String* prefix, $String* uri) override;
	virtual ::java::util::Enumeration* getAllPrefixes() override;
	virtual $String* getDeclaredPrefixAt(int32_t index) override;
	virtual int32_t getDeclaredPrefixCount() override;
	virtual $String* getPrefix($String* uri) override;
	virtual ::java::util::Iterator* getPrefixes();
	virtual ::java::util::List* getPrefixes($String* uri);
	virtual $String* getURI($String* prefix) override;
	virtual void popContext() override;
	virtual void pushContext() override;
	virtual void reset() override;
	$StringArray* fNamespace = nullptr;
	int32_t fNamespaceSize = 0;
	$ints* fContext = nullptr;
	int32_t fCurrentContext = 0;
	$StringArray* fPrefixes = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_NamespaceSupport_h_