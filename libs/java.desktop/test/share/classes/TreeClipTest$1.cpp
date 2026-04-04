#include <TreeClipTest$1.h>
#include <TreeClipTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB
#undef WHITE

using $TreeClipTest = ::TreeClipTest;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIO = ::javax::imageio::ImageIO;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;

void TreeClipTest$1::init$() {
}

void TreeClipTest$1::run() {
	$useLocalObjectStack();
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode, "JTree"_s));
	$var($DefaultMutableTreeNode, parent, nullptr);
	$assign(parent, $new($DefaultMutableTreeNode, "colors"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "blue"_s));
	$var($DefaultTreeModel, model, $new($DefaultTreeModel, root));
	$var($JTree, tree, $new($JTree, model));
	$var($BufferedImage, img, $new($BufferedImage, 50, 50, $BufferedImage::TYPE_INT_ARGB));
	for (int32_t clipY = 1; clipY < 50; ++clipY) {
		$var($Graphics2D, ig, img->createGraphics());
		$init($Color);
		$nc(ig)->setColor($Color::WHITE);
		ig->fillRect(0, 0, 1000, 1000);
		tree->setSize(200, 200);
		ig->setClip(0, 0, 1000, clipY);
		tree->paint(ig);
		ig->dispose();
		if (!$TreeClipTest::checkImage(img, clipY)) {
			$nc($System::err)->println($$str({"Failed with clipY="_s, $$str(clipY)}));
			$TreeClipTest::passed = false;
			try {
				$ImageIO::write(img, "PNG"_s, $$new($File, "failedResult.png"_s));
			} catch ($IOException& e) {
				e->printStackTrace();
			}
			return;
		}
	}
}

TreeClipTest$1::TreeClipTest$1() {
}

$Class* TreeClipTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TreeClipTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TreeClipTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TreeClipTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TreeClipTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TreeClipTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TreeClipTest"
	};
	$loadClass(TreeClipTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeClipTest$1);
	});
	return class$;
}

$Class* TreeClipTest$1::class$ = nullptr;