#ifndef TABSTATE_H
#define TABSTATE_H

#include <QObject>


class QString;

class TabState
{
public:
    TabState(const QString & file);

    QString file;

    bool is_temporary = false;
    bool changed = false;
    bool swapped = false;

    bool closefile_enabled = true;
    bool closeall_enabled = true;
    bool savefile_enabled = true;
    bool savefileas_enabled = true;
    bool saveall_enabled = true;

    bool undo_enabled = false;
    bool redo_enabled = false;
    bool selectall_enabled = true;

    bool swapviews_enabled = true;
    bool highlight_enabled = true;
    bool highlight_checked = true;
    bool wordwrap_enabled = true;
    bool wordwrap_checked = true;
    bool viewsource_enabled = true;
    bool viewsource_checked = true;
    bool viewgraphic_enabled = true;
    bool viewgraphic_checked = true;
    bool zoomin_enabled = true;
    bool zoomout_enabled = true;
    bool fittoview_enabled = true;

};


#endif // TABSTATE_H
