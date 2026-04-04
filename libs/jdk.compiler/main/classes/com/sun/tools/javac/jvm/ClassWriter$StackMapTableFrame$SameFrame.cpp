#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$SameFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <jcpp.h>

using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $ClassWriter$StackMapTableFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassWriter$StackMapTableFrame$SameFrame::init$(int32_t offsetDelta) {
	$ClassWriter$StackMapTableFrame::init$();
	this->offsetDelta = offsetDelta;
}

int32_t ClassWriter$StackMapTableFrame$SameFrame::getFrameType() {
	return (this->offsetDelta < 64) ? this->offsetDelta : 251;
}

void ClassWriter$StackMapTableFrame$SameFrame::write($ClassWriter* writer) {
	$useLocalObjectStack();
	$ClassWriter$StackMapTableFrame::write(writer);
	if (getFrameType() == 251) {
		$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
		if (writer->debugstackmap) {
			$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
		}
	}
}

ClassWriter$StackMapTableFrame$SameFrame::ClassWriter$StackMapTableFrame$SameFrame() {
}

$Class* ClassWriter$StackMapTableFrame$SameFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$SameFrame, offsetDelta)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ClassWriter$StackMapTableFrame$SameFrame, init$, void, int32_t)},
		{"getFrameType", "()I", nullptr, 0, $virtualMethod(ClassWriter$StackMapTableFrame$SameFrame, getFrameType, int32_t)},
		{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0, $virtualMethod(ClassWriter$StackMapTableFrame$SameFrame, write, void, $ClassWriter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "SameFrame", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameFrame",
		"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassWriter"
	};
	$loadClass(ClassWriter$StackMapTableFrame$SameFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassWriter$StackMapTableFrame$SameFrame);
	});
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$SameFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com