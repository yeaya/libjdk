#include <DefaultRowSorterIOOBEtest$3.h>
#include <DefaultRowSorterIOOBEtest.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DefaultRowSorterIOOBEtest$3::init$(int32_t arg0, $PrintStream* val$err) {
	$set(this, val$err, val$err);
	$ByteArrayOutputStream::init$(arg0);
}

void DefaultRowSorterIOOBEtest$3::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$ByteArrayOutputStream::write(b, off, len);
		$nc(this->val$err)->print($$new($String, b, off, len));
	}
}

DefaultRowSorterIOOBEtest$3::DefaultRowSorterIOOBEtest$3() {
}

$Class* DefaultRowSorterIOOBEtest$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$err", "Ljava/io/PrintStream;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultRowSorterIOOBEtest$3, val$err)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/io/PrintStream;)V", nullptr, 0, $method(DefaultRowSorterIOOBEtest$3, init$, void, int32_t, $PrintStream*)},
		{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DefaultRowSorterIOOBEtest$3, write, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DefaultRowSorterIOOBEtest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultRowSorterIOOBEtest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultRowSorterIOOBEtest$3",
		"java.io.ByteArrayOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DefaultRowSorterIOOBEtest"
	};
	$loadClass(DefaultRowSorterIOOBEtest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultRowSorterIOOBEtest$3));
	});
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$3::class$ = nullptr;