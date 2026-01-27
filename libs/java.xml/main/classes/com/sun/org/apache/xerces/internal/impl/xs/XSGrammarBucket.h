#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSGrammarBucket_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSGrammarBucket_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSGrammarBucket
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class XSGrammarBucket : public ::java::lang::Object {
	$class(XSGrammarBucket, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSGrammarBucket();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* getGrammar($String* namespace$);
	virtual $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* getGrammars();
	virtual void putGrammar(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual bool putGrammar(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, bool deep);
	virtual bool putGrammar(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar, bool deep, bool ignoreConflict);
	virtual void reset();
	::java::util::Map* fGrammarRegistry = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* fNoNSGrammar = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSGrammarBucket_h_