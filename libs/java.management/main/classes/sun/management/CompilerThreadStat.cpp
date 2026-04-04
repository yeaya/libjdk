#include <sun/management/CompilerThreadStat.h>
#include <sun/management/MethodInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $1MethodInfo = ::java::lang::MethodInfo;
using $MethodInfo = ::sun::management::MethodInfo;

namespace sun {
	namespace management {

void CompilerThreadStat::init$($String* name, int64_t taskCount, int64_t time, $MethodInfo* lastMethod) {
	$set(this, name, name);
	this->taskCount = taskCount;
	this->compileTime = time;
	$set(this, lastMethod, lastMethod);
}

$String* CompilerThreadStat::getName() {
	return this->name;
}

int64_t CompilerThreadStat::getCompileTaskCount() {
	return this->taskCount;
}

int64_t CompilerThreadStat::getCompileTime() {
	return this->compileTime;
}

$MethodInfo* CompilerThreadStat::getLastCompiledMethodInfo() {
	return this->lastMethod;
}

$String* CompilerThreadStat::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(getName()));
	var$0->append(" compileTasks = "_s);
	var$0->append(getCompileTaskCount());
	var$0->append(" compileTime = "_s);
	var$0->append(getCompileTime());
	return $str(var$0);
}

CompilerThreadStat::CompilerThreadStat() {
}

$Class* CompilerThreadStat::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CompilerThreadStat, name)},
		{"taskCount", "J", nullptr, $PRIVATE, $field(CompilerThreadStat, taskCount)},
		{"compileTime", "J", nullptr, $PRIVATE, $field(CompilerThreadStat, compileTime)},
		{"lastMethod", "Lsun/management/MethodInfo;", nullptr, $PRIVATE, $field(CompilerThreadStat, lastMethod)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompilerThreadStat, serialVersionUID)},
		{}
	};
	$1MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;JJLsun/management/MethodInfo;)V", nullptr, 0, $method(CompilerThreadStat, init$, void, $String*, int64_t, int64_t, $MethodInfo*)},
		{"getCompileTaskCount", "()J", nullptr, $PUBLIC, $virtualMethod(CompilerThreadStat, getCompileTaskCount, int64_t)},
		{"getCompileTime", "()J", nullptr, $PUBLIC, $virtualMethod(CompilerThreadStat, getCompileTime, int64_t)},
		{"getLastCompiledMethodInfo", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC, $virtualMethod(CompilerThreadStat, getLastCompiledMethodInfo, $MethodInfo*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CompilerThreadStat, getName, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CompilerThreadStat, toString, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.management.CompilerThreadStat",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CompilerThreadStat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompilerThreadStat);
	});
	return class$;
}

$Class* CompilerThreadStat::class$ = nullptr;

	} // management
} // sun