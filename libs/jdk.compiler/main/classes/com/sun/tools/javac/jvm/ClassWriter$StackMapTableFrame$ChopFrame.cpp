#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$ChopFrame.h>
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

void ClassWriter$StackMapTableFrame$ChopFrame::init$(int32_t frameType, int32_t offsetDelta) {
	$ClassWriter$StackMapTableFrame::init$();
	this->frameType = frameType;
	this->offsetDelta = offsetDelta;
}

int32_t ClassWriter$StackMapTableFrame$ChopFrame::getFrameType() {
	return this->frameType;
}

void ClassWriter$StackMapTableFrame$ChopFrame::write($ClassWriter* writer) {
	$useLocalObjectStack();
	$ClassWriter$StackMapTableFrame::write(writer);
	$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
	if (writer->debugstackmap) {
		$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
	}
}

ClassWriter$StackMapTableFrame$ChopFrame::ClassWriter$StackMapTableFrame$ChopFrame() {
}

$Class* ClassWriter$StackMapTableFrame$ChopFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frameType", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$ChopFrame, frameType)},
		{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$ChopFrame, offsetDelta)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(ClassWriter$StackMapTableFrame$ChopFrame, init$, void, int32_t, int32_t)},
		{"getFrameType", "()I", nullptr, 0, $virtualMethod(ClassWriter$StackMapTableFrame$ChopFrame, getFrameType, int32_t)},
		{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0, $virtualMethod(ClassWriter$StackMapTableFrame$ChopFrame, write, void, $ClassWriter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$ChopFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "ChopFrame", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$ChopFrame",
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
	$loadClass(ClassWriter$StackMapTableFrame$ChopFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassWriter$StackMapTableFrame$ChopFrame);
	});
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$ChopFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com