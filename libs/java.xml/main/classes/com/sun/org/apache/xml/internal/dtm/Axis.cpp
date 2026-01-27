#include <com/sun/org/apache/xml/internal/dtm/Axis.h>

#include <jcpp.h>

#undef ALL
#undef ALLFROMNODE
#undef ANCESTOR
#undef ANCESTORORSELF
#undef ATTRIBUTE
#undef CHILD
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DESCENDANTSFROMROOT
#undef DESCENDANTSORSELFFROMROOT
#undef FILTEREDLIST
#undef FOLLOWING
#undef FOLLOWINGSIBLING
#undef NAMESPACE
#undef NAMESPACEDECLS
#undef PARENT
#undef PRECEDING
#undef PRECEDINGANDANCESTOR
#undef PRECEDINGSIBLING
#undef ROOT
#undef SELF

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _Axis_FieldInfo_[] = {
	{"ANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, ANCESTOR)},
	{"ANCESTORORSELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, ANCESTORORSELF)},
	{"ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, ATTRIBUTE)},
	{"CHILD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, CHILD)},
	{"DESCENDANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, DESCENDANT)},
	{"DESCENDANTORSELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, DESCENDANTORSELF)},
	{"FOLLOWING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, FOLLOWING)},
	{"FOLLOWINGSIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, FOLLOWINGSIBLING)},
	{"NAMESPACEDECLS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, NAMESPACEDECLS)},
	{"NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, NAMESPACE)},
	{"PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, PARENT)},
	{"PRECEDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, PRECEDING)},
	{"PRECEDINGSIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, PRECEDINGSIBLING)},
	{"SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, SELF)},
	{"ALLFROMNODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, ALLFROMNODE)},
	{"PRECEDINGANDANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, PRECEDINGANDANCESTOR)},
	{"ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, ALL)},
	{"DESCENDANTSFROMROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, DESCENDANTSFROMROOT)},
	{"DESCENDANTSORSELFFROMROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, DESCENDANTSORSELFFROMROOT)},
	{"ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, ROOT)},
	{"FILTEREDLIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Axis, FILTEREDLIST)},
	{"isReverse", "[Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Axis, isReverse$)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Axis, names)},
	{}
};

$MethodInfo _Axis_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Axis, init$, void)},
	{"getNames", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Axis, getNames, $String*, int32_t)},
	{"getNamesLength", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Axis, getNamesLength, int32_t)},
	{"isReverse", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Axis, isReverse, bool, int32_t)},
	{}
};

$ClassInfo _Axis_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.Axis",
	"java.lang.Object",
	nullptr,
	_Axis_FieldInfo_,
	_Axis_MethodInfo_
};

$Object* allocate$Axis($Class* clazz) {
	return $of($alloc(Axis));
}

$booleans* Axis::isReverse$ = nullptr;
$StringArray* Axis::names = nullptr;

void Axis::init$() {
}

bool Axis::isReverse(int32_t axis) {
	$init(Axis);
	return $nc(Axis::isReverse$)->get(axis);
}

$String* Axis::getNames(int32_t index) {
	$init(Axis);
	return $nc(Axis::names)->get(index);
}

int32_t Axis::getNamesLength() {
	$init(Axis);
	return $nc(Axis::names)->length;
}

void clinit$Axis($Class* class$) {
	$assignStatic(Axis::isReverse$, $new($booleans, {
		true,
		true,
		false,
		false,
		false,
		false,
		false,
		false,
		false,
		false,
		false,
		true,
		true,
		false
	}));
	$assignStatic(Axis::names, $new($StringArray, {
		"ancestor"_s,
		"ancestor-or-self"_s,
		"attribute"_s,
		"child"_s,
		"descendant"_s,
		"descendant-or-self"_s,
		"following"_s,
		"following-sibling"_s,
		"namespace-decls"_s,
		"namespace"_s,
		"parent"_s,
		"preceding"_s,
		"preceding-sibling"_s,
		"self"_s,
		"all-from-node"_s,
		"preceding-and-ancestor"_s,
		"all"_s,
		"descendants-from-root"_s,
		"descendants-or-self-from-root"_s,
		"root"_s,
		"filtered-list"_s
	}));
}

Axis::Axis() {
}

$Class* Axis::load$($String* name, bool initialize) {
	$loadClass(Axis, name, initialize, &_Axis_ClassInfo_, clinit$Axis, allocate$Axis);
	return class$;
}

$Class* Axis::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com