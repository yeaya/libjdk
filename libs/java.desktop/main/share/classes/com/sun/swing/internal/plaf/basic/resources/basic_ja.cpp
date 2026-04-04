#include <com/sun/swing/internal/plaf/basic/resources/basic_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace basic {
						namespace resources {

void basic_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AbstractButton.click.textAndMnemonic"_s,
			u"クリック"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.addition.textAndMnemonic"_s,
			u"追加"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.deletion.textAndMnemonic"_s,
			u"削除"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.redo.textAndMnemonic"_s,
			u"やり直し"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.styleChange.textAndMnemonic"_s,
			u"スタイル変更"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.undo.textAndMnemonic"_s,
			u"元に戻す"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.redo.textAndMnemonic"_s,
			u"やり直し"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.undo.textAndMnemonic"_s,
			u"元に戻す"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cancel.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmyk.textAndMnemonic"_s,
			"C&MYK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykAlpha.textAndMnemonic"_s,
			u"アルファ"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykBlack.textAndMnemonic"_s,
			u"黒"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykCyan.textAndMnemonic"_s,
			u"シアン"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykMagenta.textAndMnemonic"_s,
			u"マゼンタ"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cmykYellow.textAndMnemonic"_s,
			u"黄"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsl.textAndMnemonic"_s,
			"HSL(&L)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslHue.textAndMnemonic"_s,
			u"色相"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslLightness.textAndMnemonic"_s,
			u"明度"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslSaturation.textAndMnemonic"_s,
			u"彩度"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hslTransparency.textAndMnemonic"_s,
			u"透明度"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsv.textAndMnemonic"_s,
			"HSV(&H)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvHue.textAndMnemonic"_s,
			u"色相"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvSaturation.textAndMnemonic"_s,
			u"彩度"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvTransparency.textAndMnemonic"_s,
			u"透明度"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsvValue.textAndMnemonic"_s,
			u"値"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.ok.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.preview.textAndMnemonic"_s,
			u"プレビュー"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.reset.textAndMnemonic"_s,
			u"リセット(&R)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgb.textAndMnemonic"_s,
			"RGB(&G)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbAlpha.textAndMnemonic"_s,
			u"アルファ"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbBlue.textAndMnemonic"_s,
			u"青(&B)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbGreen.textAndMnemonic"_s,
			u"緑(&N)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbHexCode.textAndMnemonic"_s,
			u"色コード(&C)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			u"赤(&D)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			u"サンプル・テキスト  サンプル・テキスト"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			u"サンプル(&S)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatchesRecent.textAndMnemonic"_s,
			u"最新:"_s
		}),
		$$new($ObjectArray, {
			"ComboBox.togglePopup.textAndMnemonic"_s,
			u"トグル・ポップアップ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			u"すべてのファイル"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButtonToolTip.textAndMnemonic"_s,
			u"ファイル・チューザ・ダイアログを終了します"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryDescription.textAndMnemonic"_s,
			u"ディレクトリ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButton.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s,
			u"選択したディレクトリを開きます"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			u"汎用ファイル"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeGigaBytes"_s,
			"{0} GB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeKiloBytes"_s,
			"{0} KB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeMegaBytes"_s,
			"{0} MB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesDetailsAccessibleName"_s,
			u"ファイルの詳細"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesListAccessibleName"_s,
			u"ファイル・リスト"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			u"ヘルプ(&H)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButtonToolTip.textAndMnemonic"_s,
			u"FileChooserのヘルプです"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			u"新規フォルダの作成エラー"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s,
			u"フォルダを作成できません。\n\n指定したパスが見つかりません。"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s,
			u"フォルダを作成できません"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButtonToolTip.textAndMnemonic"_s,
			u"選択したファイルを開きます"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder"_s,
			u"新規フォルダ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.other.newFolder.subsequent"_s,
			u"新規フォルダ.{0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameError.textAndMnemonic"_s,
			u"{0}の名前を変更できません"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorFileExists.textAndMnemonic"_s,
			u"{0}の名前を変更できません: 指定した名前のファイルはすでに存在します。別のファイル名を指定してください。 "_s
		}),
		$$new($ObjectArray, {
			"FileChooser.renameErrorTitle.textAndMnemonic"_s,
			u"ファイルまたはフォルダの名前変更エラー"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButtonToolTip.textAndMnemonic"_s,
			u"選択したファイルを保存します"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			u"更新(&U)"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButtonToolTip.textAndMnemonic"_s,
			u"ディレクトリのリストを更新します"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder"_s,
			u"新規フォルダ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.win32.newFolder.subsequent"_s,
			u"新規フォルダ({0})"_s
		}),
		$$new($ObjectArray, {
			"FormView.browseFileButton.textAndMnemonic"_s,
			u"参照..."_s
		}),
		$$new($ObjectArray, {
			"FormView.resetButton.textAndMnemonic"_s,
			u"リセット"_s
		}),
		$$new($ObjectArray, {
			"FormView.submitButton.textAndMnemonic"_s,
			u"問合せの実行"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.closeButtonToolTip"_s,
			u"閉じる"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			u"最小化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			u"最大化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			u"復元"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			u"閉じる(&C)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButtonAccessibleName"_s,
			u"閉じる"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.iconifyButtonAccessibleName"_s,
			u"アイコン化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s,
			u"最大化(&X)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			u"最大化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			u"最小化(&N)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			u"移動(&M)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			u"復元(&R)"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			u"サイズ(&S)"_s
		}),
		$$new($ObjectArray, {
			"IsindexView.prompt"_s,
			u"検索用の索引です。検索するキーワードを入力してください:"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.cancelButton.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.inputDialog.titleAndMnemonic"_s,
			u"入力"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.messageDialog.titleAndMnemonic"_s,
			u"メッセージ"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.noButton.textAndMnemonic"_s,
			u"いいえ(&N)"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.okButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.title.textAndMnemonic"_s,
			u"オプションの選択"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.yesButton.textAndMnemonic"_s,
			u"はい(&Y)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButton.textAndMnemonic"_s,
			u"中止(&A)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			u"印刷の中止"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			u"印刷を中止しています..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentInitial.textAndMnemonic"_s,
			u"印刷中..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentProgress.textAndMnemonic"_s,
			u"ページ{0}を印刷しました..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleAborting.textAndMnemonic"_s,
			u"印刷を中止しています"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleProgress.textAndMnemonic"_s,
			u"印刷しています"_s
		}),
		$$new($ObjectArray, {
			"ProgressMonitor.progress.textAndMnemonic"_s,
			u"進行中..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			u"左ボタン"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			u"右ボタン"_s
		})
	});
}

basic_ja::basic_ja() {
}

$Class* basic_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(basic_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(basic_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.swing.internal.plaf.basic.resources.basic_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(basic_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(basic_ja);
	});
	return class$;
}

$Class* basic_ja::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com