#include <sun/management/MethodInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {

void MethodInfo::init$($String* name, int64_t type, int32_t compileSize) {
	$set(this, name, name);
	this->type = type;
	this->compileSize = compileSize;
}

$String* MethodInfo::getName() {
	return this->name;
}

int64_t MethodInfo::getType() {
	return this->type;
}

int32_t MethodInfo::getCompileSize() {
	return this->compileSize;
}

$String* MethodInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(getName()));
	var$0->append(" type = "_s);
	var$0->append(getType());
	var$0->append(" compileSize = "_s);
	var$0->append(getCompileSize());
	return $str(var$0);
}

MethodInfo::MethodInfo() {
}

$Class* MethodInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodInfo, name)},
		{"type", "J", nullptr, $PRIVATE, $field(MethodInfo, type)},
		{"compileSize", "I", nullptr, $PRIVATE, $field(MethodInfo, compileSize)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodInfo, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;JI)V", nullptr, 0, $method(MethodInfo, init$, void, $String*, int64_t, int32_t)},
		{"getCompileSize", "()I", nullptr, $PUBLIC, $virtualMethod(MethodInfo, getCompileSize, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodInfo, getName, $String*)},
		{"getType", "()J", nullptr, $PUBLIC, $virtualMethod(MethodInfo, getType, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.management.MethodInfo",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodInfo);
	});
	return class$;
}

$Class* MethodInfo::class$ = nullptr;

	} // management
} // sun