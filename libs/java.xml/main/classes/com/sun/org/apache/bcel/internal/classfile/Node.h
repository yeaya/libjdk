#ifndef _com_sun_org_apache_bcel_internal_classfile_Node_h_
#define _com_sun_org_apache_bcel_internal_classfile_Node_h_
//$ interface com.sun.org.apache.bcel.internal.classfile.Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Visitor;
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
				namespace bcel {
					namespace internal {
						namespace classfile {

class Node : public ::java::lang::Object {
	$interface(Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* obj) {}
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Node_h_