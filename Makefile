#############################################################################
# Makefile for building: CimiApp2
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  CimiApp2.pro
# Template: app
# Command: C:/Qt/5.5/mingw492_32/bin/qmake.exe -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile CimiApp2.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = C:/Qt/5.5/mingw492_32/bin/qmake.exe
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = cp -f
INSTALL_PROGRAM = cp -f
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: CimiApp2.pro ../../../Qt/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf ../../../Qt/5.5/mingw492_32/mkspecs/features/spec_pre.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/qdevice.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/features/device_config.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/qconfig.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_clucene_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uiplugin.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../Qt/5.5/mingw492_32/mkspecs/features/qt_functions.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/qt_config.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/win32/qt_config.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/spec_post.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/default_pre.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/win32/default_pre.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/resolve_config.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds_post.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/default_post.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/qml_debug.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/win32/rtti.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/precompile_header.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/warn_on.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/qt.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/resources.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/moc.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/win32/opengl.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/uic.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/win32/windows.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/testcase_targets.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/exceptions.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/yacc.prf \
		../../../Qt/5.5/mingw492_32/mkspecs/features/lex.prf \
		CimiApp2.pro \
		C:/Qt/5.5/mingw492_32/lib/qtmaind.prl \
		C:/Qt/5.5/mingw492_32/lib/Qt5PrintSupport.prl \
		C:/Qt/5.5/mingw492_32/lib/Qt5Widgets.prl \
		C:/Qt/5.5/mingw492_32/lib/Qt5Gui.prl \
		C:/Qt/5.5/mingw492_32/lib/Qt5Sql.prl \
		C:/Qt/5.5/mingw492_32/lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile CimiApp2.pro
../../../Qt/5.5/mingw492_32/mkspecs/features/spec_pre.prf:
../../../Qt/5.5/mingw492_32/mkspecs/qdevice.pri:
../../../Qt/5.5/mingw492_32/mkspecs/features/device_config.prf:
../../../Qt/5.5/mingw492_32/mkspecs/qconfig.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_clucene_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_platformsupport_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uiplugin.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../../Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../../Qt/5.5/mingw492_32/mkspecs/features/qt_functions.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/qt_config.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/win32/qt_config.prf:
../../../Qt/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf:
../../../Qt/5.5/mingw492_32/mkspecs/features/spec_post.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/default_pre.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/win32/default_pre.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/resolve_config.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds_post.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/default_post.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/qml_debug.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/win32/rtti.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/precompile_header.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/warn_on.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/qt.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/resources.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/moc.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/win32/opengl.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/uic.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/win32/windows.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/testcase_targets.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/exceptions.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/yacc.prf:
../../../Qt/5.5/mingw492_32/mkspecs/features/lex.prf:
CimiApp2.pro:
C:/Qt/5.5/mingw492_32/lib/qtmaind.prl:
C:/Qt/5.5/mingw492_32/lib/Qt5PrintSupport.prl:
C:/Qt/5.5/mingw492_32/lib/Qt5Widgets.prl:
C:/Qt/5.5/mingw492_32/lib/Qt5Gui.prl:
C:/Qt/5.5/mingw492_32/lib/Qt5Sql.prl:
C:/Qt/5.5/mingw492_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile CimiApp2.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
