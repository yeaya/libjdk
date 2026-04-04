#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1$1.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$XSNamedMapEntry.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $XSNamedMapImpl$XSNamedMapEntryArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$XSNamedMapEntry>;
using $XSNamedMapImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl;
using $XSNamedMapImpl$1$1 = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

void XSNamedMapImpl$1::init$($XSNamedMapImpl* this$0, int32_t val$length, $XSNamedMapImpl$XSNamedMapEntryArray* val$entries) {
	$set(this, this$0, this$0);
	this->val$length = val$length;
	$set(this, val$entries, val$entries);
	$AbstractSet::init$();
}

$Iterator* XSNamedMapImpl$1::iterator() {
	return $new($XSNamedMapImpl$1$1, this);
}

int32_t XSNamedMapImpl$1::size() {
	return this->val$length;
}

XSNamedMapImpl$1::XSNamedMapImpl$1() {
}

$Class* XSNamedMapImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XSNamedMapImpl$1, this$0)},
		{"val$entries", "[Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$XSNamedMapEntry;", nullptr, $FINAL | $SYNTHETIC, $field(XSNamedMapImpl$1, val$entries)},
		{"val$length", "I", nullptr, $FINAL | $SYNTHETIC, $field(XSNamedMapImpl$1, val$length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl;I[Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$XSNamedMapEntry;)V", nullptr, 0, $method(XSNamedMapImpl$1, init$, void, $XSNamedMapImpl*, int32_t, $XSNamedMapImpl$XSNamedMapEntryArray*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;>;", $PUBLIC, $virtualMethod(XSNamedMapImpl$1, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$1, size, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl",
		"entrySet",
		"()Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1", nullptr, nullptr, 0},
		{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl"
	};
	$loadClass(XSNamedMapImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XSNamedMapImpl$1));
	});
	return class$;
}

$Class* XSNamedMapImpl$1::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com