// Object Viewer Qt Material Editor plugin <http://dev.ryzom.com/projects/ryzom/>
// Copyright (C) 2010  Winch Gate Property Limited
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "material_widget.h"
#include "render_passes.h"

namespace MaterialEditor
{

	MaterialWidget::MaterialWidget( QWidget *parent ) :
	QWidget( parent )
	{
		setupUi( this );
		renderPassesWidget = new RenderPassesWidget();
		setupConnections();
	}

	MaterialWidget::~MaterialWidget()
	{
		delete renderPassesWidget;
		renderPassesWidget = NULL;
	}

	void MaterialWidget::setupConnections()
	{
		connect( passButton, SIGNAL( clicked( bool ) ), this, SLOT( onPassEditClicked() ) );

		connect( renderPassesWidget, SIGNAL( okClicked() ), this, SLOT( onPassOKClicked() ) );
		connect( renderPassesWidget, SIGNAL( passRenamed( const QString&, const QString& ) ),
			this, SLOT( onPassRenamed( const QString&, const QString& ) ) );
		connect( renderPassesWidget, SIGNAL( passPushedUp( const QString& ) ),
			this, SLOT( onPassPushedUp( const QString& ) ) );
		connect( renderPassesWidget, SIGNAL( passPushedDown( const QString& ) ),
			this, SLOT( onPassPushedDown( const QString& ) ) );
	}

	void MaterialWidget::onPassEditClicked()
	{
		renderPassesWidget->show();
	}

	void MaterialWidget::onPassOKClicked()
	{
	}

	void MaterialWidget::onPassRenamed( const QString &from, const QString &to )
	{
	}

	void MaterialWidget::onPassPushedUp( const QString &pass )
	{
	}

	void MaterialWidget::onPassPushedDown( const QString &pass )
	{
	}

}

