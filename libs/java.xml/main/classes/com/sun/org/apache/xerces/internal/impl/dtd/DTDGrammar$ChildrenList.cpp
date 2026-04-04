#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar$ChildrenList.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <jcpp.h>

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

void DTDGrammar$ChildrenList::init$() {
	this->length = 0;
	$set(this, qname, $new($QNameArray, 2));
	$set(this, type, $new($ints, 2));
}

DTDGrammar$ChildrenList::DTDGrammar$ChildrenList() {
}

$Class* DTDGrammar$ChildrenList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"length", "I", nullptr, $PUBLIC, $field(DTDGrammar$ChildrenList, length)},
		{"qname", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $field(DTDGrammar$ChildrenList, qname)},
		{"type", "[I", nullptr, $PUBLIC, $field(DTDGrammar$ChildrenList, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DTDGrammar$ChildrenList, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar$ChildrenList", "com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar", "ChildrenList", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar$ChildrenList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar"
	};
	$loadClass(DTDGrammar$ChildrenList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTDGrammar$ChildrenList);
	});
	return class$;
}

$Class* DTDGrammar$ChildrenList::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com